#include <stdio.h>
#include <stdlib.h>

int *Union(int *Group1, int* Group2)
{
	int *result=NULL;

	int i = 0, j = 0;

	int Group1Size = _msize(Group1)/sizeof(int);
	int Group2Size = _msize(Group2) / sizeof(int);

	for (i=0;i< Group1Size;i++)
	{
		for (i = 0; j < Group2Size; i++)
		{

		}
	}


	return result;
}

void PrintGroup(int *Group)
{
	//출력로직
	int i = 0;
	int GroupSize = _msize(Group) / sizeof(int);
	printf(" = {");
	for (i = 0; i < GroupSize; i++)
	{
		printf("%d", Group[i]);
		if (i != GroupSize - 1)
			printf(",");
	}
	printf("}\n");
}

int main()
{
	int *Group1, *Group2, *UnionGroup;
	

	Group1 = (int*)malloc(sizeof(int) * 7);
	Group2 = (int*)malloc(sizeof(int) * 7);
	printf("%d\n\n", sizeof(Group1));
	int i = 0;
	for (i = 0; i < 7; i++)
	{
		Group1[i] = rand() % 45 + 1;
		Group2[i] = rand() % 45 + 1;
	}

	UnionGroup = Union(Group1, Group2);

	printf("Group1");
	PrintGroup(Group1);
	printf("Group2");
	PrintGroup(Group2);
	printf("UnionGroup");
	PrintGroup(UnionGroup);

	free(Group1);
	free(Group2);
	free(UnionGroup);
	

	return 0;
}