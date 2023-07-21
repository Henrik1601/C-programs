#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE


#define MAX_INGREDIENTS 10
#define MAX_RECIPE_LENGTH 100

char recipes[1000][MAX_RECIPE_LENGTH];
int num_recipes = 0;

void load_recipes() {
    FILE* fp;
    char* line = NULL;
    size_t len = 0;
    ssize_t read;
    fp = fopen("recipes.txt", "r");
    if (fp == NULL) {
        printf("Error: cannot open recipes file\n");
        exit(1);
    }
    while ((read = scanf(&line, &len, fp)) != -1) {
        if (line[strlen(line)-1] == '\n') {
            line[strlen(line)-1] = '\0';
        }
        strcpy(recipes[num_recipes], line);
        num_recipes++;
    }
    fclose(fp);
    if (line) {
        free(line);
    }
}

int main() {
    char ingredients[MAX_INGREDIENTS][50];
    int num_ingredients;
    int i, j;
    srand(time(NULL));
    load_recipes();
    printf("Enter the number of ingredients: ");
    scanf("%d", &num_ingredients);
    printf("Enter the ingredients (separated by newlines):\n");
    for (i = 0; i < num_ingredients; i++) {
        scanf("%s", ingredients[i]);
    }
    printf("Looking for recipes with the following ingredients:\n");
    for (i = 0; i < num_ingredients; i++) {
        printf("%s\n", ingredients[i]);
    }
    printf("\n");
    printf("Here's a recipe that you can make:\n");
    int found_recipe = 0;
    while (!found_recipe) {
        int index = rand() % num_recipes;
        char* recipe = recipes[index];
        for (i = 0; i < num_ingredients; i++) {
            if (strstr(recipe, ingredients[i]) == NULL) {
                break;
            }
        }
        if (i == num_ingredients) {
            printf("%s\n", recipe);
            found_recipe = 1;
        }
    }
    return 0;
}

