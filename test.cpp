#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>

struct coordinates{
    double x,y;
};

void generatePoints(int n,std::vector<coordinates>& points){
    srand(time(0));
    double radius = 300;
    while(points.size()<n){
        double x = 0 + (2.0 * radius * (std::rand() / static_cast<double>(RAND_MAX)) - radius);
        double y = 0 + (2.0 * radius * (std::rand() / static_cast<double>(RAND_MAX)) - radius);
        coordinates temp = {x,y};
        if (std::pow(x - 0, 2) + std::pow(y - 0, 2) <= std::pow(radius, 2)) {

            points.push_back(temp);
        }
    }
}


int main(){
    std::vector<coordinates> points;
    int n;
    std::cout<<"Enter the number of points:";
    std::cin>>n;
    generatePoints(n,points);

    for(int i = 0; i<points.size();i++){
        std::cout<<'('<<points.at(i).x<<", "<<points.at(i).y<<')'<<std::endl;
    }
    std::cout<<points.size()<<std::endl;
    std::cout<<"Points were successfully generated."<<std::endl;
    return 0;
}