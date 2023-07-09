// 3.5-1.cpp : 
//
#include <iostream>
#include <Windows.h>
//#include <string>

class Figure {

   protected:
       int sides_count;//   поле будет защищённым, чтобы нельзя было изменить его извне, но можно изменить значение в наследниках
       std::string figure;
    public:
    Figure(){
           sides_count = 0;
           figure = "Фигура: ";
    }

 void get_sides_count() //   публичный метод Он будет унаследован обоими фигурами.
  {
        std::cout << figure  << sides_count << "\n";
  }
};

class Triangle : public Figure {
 public:
    
    Triangle() {
      sides_count = 3;
      figure = "Треугольник : ";
    }
};
class Quadrangle : public Figure {
 public:
 
    Quadrangle() {
        sides_count = 4;
        figure = "Четырёхугольник :";
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);

    int sides;
    std::cout << "Количество сторон:\n";
    //std::cin >> sides;

       Figure f;
    f.get_sides_count(); 
    
    Triangle t;
    t.get_sides_count();


    Quadrangle q;
   q.get_sides_count();
 




 /*   if (sides == 3) {
        Triangle t;
        t.get_sides_count();
    }
    else if (sides == 3) {
        Quadrangle q;
        q.get_sides_count();
    }
    else {
        Figure f;
        f.get_sides_count();
    }*/


    /*switch (sides)
    {
    case 3:
        Triangle t;
        t.get_sides_count();
        break;
    case 4:
        Quadrangle q;
        q.get_sides_count();
        break;
    default:
        Figure f;
        f.get_sides_count();
        break;
    }*/


    //std::cout << f.sides_count << " \n";
    
    std::cout << "Конец файла!\n";
}





#if 0
Количество сторон :
Фигура: 0
Треугольник : 3
Четырёхугольник : 4
#endif