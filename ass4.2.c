#include <stdio.h>
#include <string.h>

struct Player {
    char name[50];
    int runs;
};

int main() {
    int i, n, total_runs = 0;
    printf("Enter the number of players: ");
    scanf("%d", &n);
    
    struct Player players[n];
    
    // Accept player details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for player %d:\n", i+1);
        printf("Name: ");
        scanf("%s", players[i].name);
        printf("Runs scored: ");
        scanf("%d", &players[i].runs);
        total_runs += players[i].runs;
    }
    
    // Display total runs scored by the team
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    
    return 0;
}

