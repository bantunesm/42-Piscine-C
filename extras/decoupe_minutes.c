#include <stdio.h>
#include <stdlib.h>

void	decoupeMinutes(int heures, int minutes);

int	main()
{
	int age = 10;
	int *ptrAge = &age;

	

	printf("%p", ptrAge);
	
	return (0);
}

void	decoupeMinutes(int heures, int minutes)
{
	heures = minutes / 60;
	minutes = minutes % 60;
}