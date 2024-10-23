#include <stdio.h>
#include <stdlib.h>

int get_matrix(int *matrix, int n, int i, int j)
{
    return matrix[i * n + j];
}

void set_matrix(int *matrix, int n, int i, int j, int value)
{
    matrix[i * n + j] = value;
}

void print_matrix(int *matrix, int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%2d ", get_matrix(matrix, n, i, j));
        }
        printf("\n\n");
    }
}

int calc_itinerary(int *matrix, int n)
{
    int distance = 0;

    int init_city = 0;
    int previous_city = 0;
    int current_city = 0;
    int count = 0;

    while (init_city != current_city || count < 2)
    {
        previous_city = current_city;
        printf("cidade %d: ", ++count);
        scanf("%d", &current_city);

        if (count == 0)
        {
            init_city = current_city;
            previous_city = current_city;
            continue;
        }

        distance += get_matrix(matrix, n, previous_city, current_city);
    }

    printf("distancia total do itinerario: %d\n", distance);

    return distance;
}

int main()
{
    int n;
    printf("numero de cidade: ");
    scanf("%d", &n);

    int *matrix = (int *)malloc(sizeof(int) * n * n);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            int dist;
            printf("distancia da cidade %ld para a cidade %ld: ", i, j);
            scanf("%d", &dist);
            set_matrix(matrix, n, i, j, dist);
        }
    }

    printf("\ndistancias\n");
    print_matrix(matrix, n);
    printf("\n");

    int itineraries;
    printf("numero de itinerarios: ");
    scanf("%d", &itineraries);

    printf("\n");
    int total_distance = 0;
    for (int i = 0; i < itineraries; i++)
    {
        printf("Itinerario %d\n", i + 1);
        total_distance += calc_itinerary(matrix, n);
        printf("\n");
    }

    printf("distancia total da viagem: %d\n", total_distance);

    return 0;
}
