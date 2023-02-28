//to find the day of any DD/MM/YYYY.
#include <iostream>
using namespace std;

int main() {
    int date=0;
    int month=0;
    int year=0;
    int q=0,ans1=0,ans2=0,ans3=0,ans4=0;
    cout << "enter bd ";
    cin >> date;
    cout << "enter bm ";
    cin >> month;
    cout << "enter by ";
    cin >> year;
    q = year /4;
    ans1=q+year+date;
    if(month == 1){
        ans2=7;
    }
    else if(month == 2){
        ans2=3;
    }
    else if(month == 3){
        ans2=3;
    }
    else if(month == 4){
        ans2=6;
    }
    else if(month == 5){
        ans2=1;
    }
    else if(month == 6){
        ans2=4;
    }
    else if(month == 7){
        ans2=6;
    }
    else if(month == 8){
        ans2=2;
    }
    else if(month == 9){
        ans2=5;
    }
    else if(month == 10){
        ans2=7;
    }
    else if(month == 11){
        ans2=3;
    }
    else if(month == 12){
        ans2=5;
    }
    else{
        cout << "undefined month ";
    }
    ans3=ans1+ans2;
    ans4=ans3%7;

    if(ans4 == 0){
        cout << "friday ";
    }
    if(ans4 == 1){
        cout << "saturday ";
    }
    if(ans4 == 2){
        cout << "sunday ";
    }
    if(ans4 == 3){
        cout << "monday ";
    }
    if(ans4 == 4){
        cout << "tuesday ";
    }
    if(ans4 == 5){
        cout << "wednesday ";
    }
    if(ans4 == 6){
        cout << "thursday ";
    }


    return 0;
}

