//Compute the Time(hh:mm:ss) in Seconds

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char input[9];
  printf("Enter the Time in hh:mm:ss format :  ");
  fgets(input, 9, stdin);  

  char *token = strtok(input, ":");  
  int hours = (int) strtoul(token, NULL, 10);  

  token = strtok(NULL, ":");  
  int minutes = (int) strtoul(token, NULL, 10);  

  token = strtok(NULL, ":");  
  int seconds = (int) strtoul(token, NULL, 10);  
  if (hours < 0 || hours > 24) {  
    printf("Invalid hours input.\n");
    return 1;
  }

  if (minutes < 0 || minutes > 60) {  
    printf("Invalid minutes input.\n");
    return 1;
  }

  if (seconds < 0 || seconds > 60) {  
    printf("Invalid seconds input.\n");
    return 1;
  }

  int totalSeconds = hours * 3600 + minutes * 60 + seconds;  

  printf("Total seconds: %d\n", totalSeconds);  
  return 0;
}
