#include <stdio.h>
#include <string.h>
int main() {
    char topic[2]; 
    printf("Enter the topic: ");
    scanf("%s", topic);

    if (strcmp(topic, "A") == 0 || strcmp(topic, "B") == 0 || strcmp(topic, "C") == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}