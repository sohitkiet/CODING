#include <stdio.h>
#include <string.h>

#define MAX_TRAINS 100
#define MAX_NAME_LEN 50
#define MAX_STATION_LEN 50

typedef struct {
    int hr;
    int min;
} TIME;

typedef struct {
    int no;
    char name[MAX_NAME_LEN];
    TIME dep;
    TIME arr;
    char start[MAX_STATION_LEN];
    char end[MAX_STATION_LEN];
} TRAIN;

void list_trains_by_section(TRAIN trains[], int n, const char *section) {
    TRAIN temp[MAX_TRAINS];
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (strcmp(trains[i].start, section) == 0) {
            temp[count++] = trains[i];
        }
    }
    for (int i = 0; i < count - 1; ++i) {
        for (int j = i + 1; j < count; ++j) {
            if (temp[i].no > temp[j].no) {
                TRAIN t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }
    printf("Trains from %s:\n", section);
    for (int i = 0; i < count; ++i) {
        printf("No: %d, Name: %s\n", temp[i].no, temp[i].name);
    }
}

void list_trains_by_time(TRAIN trains[], int n, const char *station, TIME time) {
    printf("Trains from %s at %02d:%02d:\n", station, time.hr, time.min);
    for (int i = 0; i < n; ++i) {
        if (strcmp(trains[i].start, station) == 0 && 
            trains[i].dep.hr == time.hr && trains[i].dep.min == time.min) {
            printf("No: %d, Name: %s\n", trains[i].no, trains[i].name);
        }
    }
}

int within_hour(TIME dep, TIME time) {
    int dep_min = dep.hr * 60 + dep.min;
    int time_min = time.hr * 60 + time.min;
    return (dep_min >= time_min && dep_min <= time_min + 60);
}

void list_trains_within_hour(TRAIN trains[], int n, const char *station, TIME time) {
    printf("Trains from %s within one hour from %02d:%02d:\n", station, time.hr, time.min);
    for (int i = 0; i < n; ++i) {
        if (strcmp(trains[i].start, station) == 0 && within_hour(trains[i].dep, time)) {
            printf("No: %d, Name: %s, Dep: %02d:%02d\n", trains[i].no, trains[i].name, trains[i].dep.hr, trains[i].dep.min);
        }
    }
}

void list_trains_by_stations(TRAIN trains[], int n, const char *start, const char *end) {
    printf("Trains from %s to %s:\n", start, end);
    for (int i = 0; i < n; ++i) {
        if (strcmp(trains[i].start, start) == 0 && strcmp(trains[i].end, end) == 0) {
            printf("No: %d, Name: %s\n", trains[i].no, trains[i].name);
        }
    }
}

int main() {
    TRAIN trains[MAX_TRAINS] = {
        {101, "ExpA", {9, 30}, {12, 45}, "Stat1", "Stat4"},
        {102, "ExpB", {10, 15}, {13, 50}, "Stat2", "Stat5"},
        {103, "ExpC", {11, 00}, {14, 30}, "Stat1", "Stat6"},
        {104, "ExpD", {9, 45}, {12, 15}, "Stat3", "Stat4"},
        {105, "ExpE", {10, 45}, {13, 20}, "Stat1", "Stat5"}
    };

    int n = 5;
    TIME time = {10, 0};

    list_trains_by_section(trains, n, "Stat1");
    list_trains_by_time(trains, n, "Stat1", time);
    list_trains_within_hour(trains, n, "Stat1", time);
    list_trains_by_stations(trains, n, "Stat1", "Stat5");

    return 0;
}