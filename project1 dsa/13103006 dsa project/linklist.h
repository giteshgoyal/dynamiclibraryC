#include<stdio.h> 

struct link 
{ 
int item; 
struct link* node; 
}; 
struct link* createnode();
void put(struct link* temp);
void display(struct link *temp); 
void insertatl(struct link* start);
void insertatb(struct link* start);
void insertati(struct link* start);
struct link* insertat1(struct link* start);
void del(struct link* start);
void loop(struct link* start);
void reverse(struct link* start); 
