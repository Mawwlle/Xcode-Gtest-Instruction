//
//  RootMath.cpp
//  RootMath
//
//  Created by Максим Дунаев on 02.11.2020.
//

#include "RootMath.hpp"


double MathLibrary::RootCalc(int A,int k){
    double e = 0.001,xN = 0,xN_1 = 0;
    xN_1 = A;
    xN = (((k-1)*xN_1)/k)+A/(k*pow(xN_1, k-1));
    
    while (abs(xN - xN_1)>=e) {
        xN_1 = xN;
        xN = (((k-1)*xN_1)/k)+A/(k*pow(xN_1, k-1));
    }
    
    return xN;
    
}

std::string Sqrt(std::string agreement){
    using namespace std::literals::chrono_literals;
    using namespace MathLibrary;
    int root = 0,power = 0;
    std::cout<<"Введите 2 числа A и k"<<std::endl;
    std::cout<<"где \nA - подкоренное выражение (натуральное число: 1,2..n)"<<std::endl;
    std::cout<<"k - степень корня (натуральное число: 1,2..n)\n"<<std::endl;
    std::this_thread::sleep_for(2s);
enter_value:
    std::cout<<"Введите A >>> ";
    std::cin >> root;
    if ((std::cin.fail()) || (root <= 0))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cout << "Произошла ошибка при вводе номера операции. Пожалуйста, попробуйте снова." << std::endl;
        std::cout << std::endl;
        
        goto enter_value;
    }
    
enter_second_value:
    std::cout<<"Введите k >>> ";
    std::cin >> power;
    
    if ((std::cin.fail()) || (power <= 0))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        std::cout << "Произошла ошибка при вводе номера операции. Пожалуйста, попробуйте снова." << std::endl;
        std::cout << std::endl;
        
        goto enter_second_value;
    }
    
    std::this_thread::sleep_for(0.3s);
    std::cout<< "\nCalculating";
    std::this_thread::sleep_for(0.3s);
    std::cout<< ".";
    std::this_thread::sleep_for(0.3s);
    std::cout<< ".";
    std::this_thread::sleep_for(0.3s);
    std::cout<< ".\n\n";
    std::cout <<"Результат >>> "<< MathLibrary::RootCalc(root, power) << std::endl;
    std::cout <<"Хотите ли вы вычислить корень повторно y/n >>> ";
    std::cin >> agreement;
    while (agreement != "y" && agreement != "n"){
        std::cout << "Неверный формат ввода!\n";
        std::cout << "Хотите ли вы вычислить корень повторно y/n >>> ";
        std::cin >> agreement;
    }
    return agreement;
}


int SimpleMathOperation::Fibbo(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return Fibbo(n-1)+Fibbo(n-2);
}

int SimpleMathOperation::Factor(int n){
    if (n<0){
        return 0;
    }
    if (n==0){
        return 1;
    }
    return Factor(n-1)*n;
}



