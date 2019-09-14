// Sales prediction

#include <iostream>

int main()
{
//2018 Sales

unsigned last_year=2103419277;

//display 2018 sales
std::cout <<"last years sales were $"<< last_year <<"\n";

//the constant for increase of sales for this year
const double INCREASE=.18;

// making variable for this year
unsigned this_year= (last_year*INCREASE)+last_year;


//calculate this years sales.
std::cout<< "This year's sales prediction: $"<<this_year<<"\n";



return 0;
}
