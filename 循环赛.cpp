#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Put_Forward(int* arr)
{
	int p = 0;
	while (arr[p])
		p++;
	for (int i = p - 1;i >= 0;i--)
		arr[i + 1] = arr[i];
	arr[0] = 0;
}
typedef struct Team
{
	char name[51];
	int Itg;
	int PureScore;
}Team;
int main()
{
	int N = 0, Rank[1000] = { 1 }, Rank2[1000] = { 1 };
	scanf("%d", &N);
	Team* List = (Team*)calloc(N, sizeof(Team));
	getchar();
	for (int i = 0;i < N;i++)
	{
		int z = 0;
		while ((List[i].name[z] = getchar()) != '\n')
			z++;
		List[i].name[z] = 0;
	}
	for (int i = 0;i < (N * (N - 1)) / 2;i++)
	{
		char tmpTeam1[51] = { 0 }, tmpTeam2[51] = { 0 };
		int Position1 = 0,Position2 = 0, Team1score = 0, Team2score = 0, n = 0;
		while ((tmpTeam1[n] = getchar()) != '-')
			n++;
		for (int i = n-1;tmpTeam1[i] == ' ';i--)
			tmpTeam1[i] = 0;
		tmpTeam1[n] = 0;
		n = 0;
		while ((tmpTeam2[n] = getchar()) == ' ');
		n++;
		while ((tmpTeam2[n] = getchar()) != ':')
			n++;
		for (int i = n - 1;tmpTeam2[i] == ' ';i--)
			tmpTeam2[i] = 0;
		tmpTeam2[n] = 0;
		scanf("%d", &Team1score);
		while (getchar() != '-');
		scanf("%d", &Team2score);
		for (int k = 0;k < N;k++)
		{
			if (!strcmp(tmpTeam1, List[k].name))
			{
				Position1 = k;
				break;
			}
		}
		for (int k = 0;k < N;k++)
		{
			if (!strcmp(tmpTeam2, List[k].name))
			{
				Position2 = k;
				break;
			}
		}
		if (Team1score > Team2score)
			List[Position1].Itg += 3;
		else if (Team1score < Team2score)
			List[Position2].Itg += 3;
		else
		{
			List[Position1].Itg++;
			List[Position2].Itg++;
		}
		List[Position1].PureScore += Team1score - Team2score;
		List[Position2].PureScore += Team2score - Team1score;
		getchar();
	}
	for (int i = 2;i <= N;i++)
	{
		for (int k = 0;Rank[k] > 0;k++)
		{
			if (List[i-1].Itg < List[Rank[k]-1].Itg)
			{
				if (!Rank[k+1])
				{
					Rank[k+1] = i;
					break;
				}
				continue;
			}
			else if (List[i-1].Itg > List[Rank[k]-1].Itg)
			{
				Put_Forward(Rank + k);
				Rank[k] = i;
				break;
			}
			else
			{
				if (List[i-1].PureScore < List[Rank[k]-1].PureScore)
					continue;
				else if (List[i-1].PureScore > List[Rank[k]-1].PureScore)
				{
					Put_Forward(Rank + k);
					Rank[k] = i;
					break;
				}
				else
				{
					for (int j = 0;Rank[j + k - 1];j++)
					{
						if (!Rank[j + k])
						{
							Rank[k + j] = i;
							break;
						}
						if (strcmp(List[i - 1].name, List[Rank[k+j] - 1].name) < 0  || 
							List[i-1].Itg > List[Rank[k+j]-1].Itg || 
							List[i - 1].PureScore > List[Rank[k + j] - 1].PureScore)
						{
							Put_Forward(Rank + k + j);
							Rank[k + j] = i;
							break;
						}
					}
					break;
				}
			}
		}
	}
	for (int i = 0;i < N-1;i++)
	{
		if (List[Rank[i + 1]-1].Itg < List[Rank[i]-1].Itg)
			Rank2[i + 1] = i+2;
		else if (List[Rank[i + 1]-1].PureScore < List[Rank[i]-1].PureScore)
			Rank2[i + 1] = i+2;
		else
			Rank2[i + 1] = Rank2[i];
	}
	for (int i = 0;Rank2[i] <= N/2 && i<N;i++)
		printf("%s\n", List[Rank[i] - 1].name);
	free(List);
	List = NULL;
	return 0;//Ñ­»·Èü
}
