// Задача №6.

#include <iostream>

int main() {


    short arr[5][5];

    short completionArr(short &arr);
    {
        srand(time(nullptr));
        for (short i = 0; i < 5; i++) {
            for (short j = 0; j < 5; j++) {
                arr[i][j] = rand() % 30 + 30;
            }
        }
    }

    void findMax(short &arr);
    {
        short maxValue = arr[0][0];
        for (short i = 0; i < 5; i++) {
            for (short j = 0; j < 5; j++) {
                if (arr[i][j] > maxValue){
                    maxValue = arr[i][j];
                }
            }
        }
        std::cout << maxValue << std::endl;
    }

    void findMin(short &arr);
    {
        short minValue = arr[0][0];
        for (short i = 0; i < 5; i++) {
            for (short j = 0; j < 5; j++) {
                if (arr[i][j] < minValue){
                    minValue = arr[i][j];
                }
            }
        }
        std::cout << minValue << std::endl;;
    }


    completionArr(short &arr);
    findMax(short &arr);
    findMin(short &arr);



    std::cout << "Finish!" << std::endl;
    return 0;
}
