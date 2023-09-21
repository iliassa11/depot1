#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main()
{
    std::vector<double> marks {};

    std::cout << "Entrez vos notes" << std::endl;

    while(true)
    {
        std::cout << "Note n°" << marks.size() + 1 << " (-1 pour quiter): ";

        double mark;
        std::cin >> mark;
        if(mark > -1.01 && mark < 0.09)
        {
            break;
        }

        marks.push_back(mark);
    }


    if(marks.size() == 0)
    {
        std::cout << "Vous n'avez pas entré de notes" << std::endl;
    }
    else
    {
        std::cout << "Vous avez entre " << marks.size() << " notes." << std::endl;


        double sum = std::accumulate(std::begin(marks), std::end(marks), 0);
        double average = sum / marks.size();

        std::cout << "La moyenne des notes est de " << average << std::endl;
    }
}

