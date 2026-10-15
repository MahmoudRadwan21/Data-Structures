// #include<iostream>
// using namespace std;

// Task_1

// template <typename T>
// T getmax(T num_1 ,T num_2)
// {
//     return (num_1 > num_2 ) ? num_1:num_2;

// }
// int main()
// {
//     int num_1=10,num_2=15;
//     int result=getmax(num_1,num_2);
//     cout<<result<<endl; 
    
// }


// int main()
// {
//     double x = 3.14, y = 20.4;

//     double result = getmax(x, y);

//     cout << result << endl;

//     return 0;
// }

// Task_2

// template <class T>
// class Temperature
// {
// private:
//     T temperature;
// public:
//     Temperature(T temp)
//     {
//         temperature=temp;
//     }
//     T get_temperature()
//     {
//         return temperature;
//     }
// };
// int main()
// {
//     Temperature < int > temp_1(15);
//     Temperature < double > temp_2 (25.5);

//     cout<< temp_1.get_temperature() <<endl;
//     cout<< temp_2.get_temperature() <<endl;
// }

// Task_3

// template < class T >
// class VisitCounter
// {
// private:
//     static int count;
// public:
//     VisitCounter()
//     {
//         count++;
//     }
//     static int get_count()
//     {
//         return count;
//     }
// };
// template <class T>
// int VisitCounter <T> :: count = 0;

// int main()
// {
//     VisitCounter <int> o1;
//     VisitCounter <int> o2;

//     VisitCounter <char> o3;
//     VisitCounter <char> o4;

//     cout<< VisitCounter <int> :: get_count() << endl;
//     cout<< VisitCounter <char> :: get_count() << endl;
// }

// Task_4

// template <class T>
// class ScoreList
// {
// private:
//     int score=0;
// public:
//      T scores[3]={};

//     void setscore(int index, T score)
//     {
//         scores[index] = score;
//     }
    
//     void printScores()
//     {
//         for (int i=0 ; i < 3 ; i++)
//         {
//             cout << scores[i] << endl;
//         }
//     }

// };
// int main()
// {
//     ScoreList <int> s1;

//     s1.setscore(0 , 10);
//     s1.setscore(1 , 20);
//     s1.setscore(2 , 30);

//     s1.printScores();
// }


// #include <iostream>
// using namespace std;

// template <class T>
// class ScoreList
// {
// private:
//     T scores[3] = {};
//     int count = 0;

// public:
//     void setscore(T score)
//     {
//         if (count < 3)
//         {
//             scores[count] = score;
//             count++;
//         }
//     }

//     void printScores()
//     {
//         for (int i = 0; i < count; i++)
//         {
//             cout << scores[i] << endl;
//         }
//     }
// };

// int main()
// {
//     ScoreList<int> s1;

//     int score;

//     for (int i = 0; i < 3; i++)
//     {
//         cin >> score;
//         s1.setscore(score);
//     }

//     s1.printScores();

//     return 0;
// }
