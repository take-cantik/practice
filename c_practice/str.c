#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void time_atoi(char time[], int time_int[]) {
  char *time_str;

  time_str = strtok(time, ":");
  time_int[0] = atoi(time_str);

  int i;
  for (i = 1; time_str != NULL; i++) {
    time_str = strtok(NULL, ":");

    if (time_str != NULL) {
      time_int[i] = atoi(time_str);
    }
  }
}

void link_str(char time[], int time_int[]) {
  char time_str[3];
  int i;

  for (i = 0; i < 3; i++) {
    sprintf(time_str, "%i", time_int[i]);
    strcat(time, time_str);
    if (i != 2) {
      strcat(time, ":");
    }
  }
}

void time_diff(int ret_time[], int time1[], int time2[]) {
  int down = 0;
  int i;

  for (i = 2; i >= 0; i--) {
    if (time1[i] - time2[i] - down >= 0) {
      ret_time[i] = time1[i] - time2[i] - down;
      down = 0;
    } else {
      ret_time[i] = 0;
      down = 1;
    }
  }
}

int main(void) {
  char time1[] = "12:30:15";
  char time2[] = "10:12:11";
  int time_i1[3];
  int time_i2[3];
  time_atoi(time1, time_i1);
  time_atoi(time2, time_i2);

  int diff_time[3];
  time_diff(diff_time, time_i1, time_i2);

  char ret_time[9];
  link_str(ret_time, diff_time);

  printf("%s\n", ret_time);

  return 0;
}
