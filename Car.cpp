#include "Car.h"
#include <iostream>

Car::Car(string make, string model,string frame, int year, int mileage, string color, int price) {
    this->make = make;
    this->model = model;
    this->frame = frame;
    this->year = year;
    this->mileage = mileage;
    this->color = color;
    this->price = price;
    totalScore = 0;
}

void Car::getTotalScore(string preferredFrame, string preferredColor, int maxPrice){
    if(frame == preferredFrame){
        totalScore+= 10;
    }

    if(color == preferredColor){
        totalScore+= 10;
    }

    if(price < maxPrice && price - maxPrice <= 1000){
        totalScore+= 10;
    }

    else if (price - maxPrice <= 2500){
        totalScore += 7.5;
    }

    else if(price - maxPrice <= 5000){
        totalScore += 5;
    }

    else{
        totalScore += 2.5;
    }

    if(year >= 2020){
        totalScore += 10;
    }
    else if(year >= 2017){
        totalScore += 7.5;
    }
    else if(year >= 2014){
        totalScore += 5;
    }
    else{
        totalScore += 2.5;
    }

    if (mileage < 25000){
        totalScore += 10;
    }

    else if (mileage < 50000){
        totalScore += 7.5;
    }

    else if (mileage < 750000){
        totalScore += 5;
    }

    else{
        totalScore += 2.5;
    }

    totalScore /= 5.0;
}

void Car::PrintInfo() {
    cout << color << " " << year << " " << make << " " << model << endl;
    cout << " Miles: " << mileage << endl;
    cout << " Frame: " << frame << endl;
    cout << " Cost: " << price << endl;
    cout << " Score: " << totalScore << endl;
}

