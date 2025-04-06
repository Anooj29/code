#include <iostream>
#include <cstdlib>


using namespace std; 

int main(){
    short minutes, seconds;
    int time;
    do
    {
        cout<<"Enter seconds:: ";
    } while (seconds>59);
    
    do
    {
        cout<<"Enter minutes:: ";
    } while (minutes>59);

    time = (minutes!=0)? minutes*60 : 0;
    time += seconds;
    
    for(int i = time; i>0; i--){
        system("clear");
        system("clc");
        cout<<"The time remaining is 0:" << minutes << ":" << seconds <<endl;
        minutes = (i%60==0)? --minutes : minutes;
        seconds = (seconds==0)? 59 : --seconds;
        // system("sleep 1");
         
        // system("TIMEOUT 1"); 
        
    }
    system("clear");
    cout<<"#####################################\nTimer ended!\a\nLasted for "<<
    time << "seconds" << "\n*************\n\n"<< endl;

}