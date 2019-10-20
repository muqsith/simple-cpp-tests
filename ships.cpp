#include <iostream>

void printShips(int ships[], int numberOfShips) {
    for (int i = 0; i < numberOfShips; i++) {
        std::cout << ships[i] << "\t";
    }
    std::cout << "\n";
}

void balanceLoad(int ships[], int numberOfShips) {
    std::cout << "Balancing ships" << "\n";
    printShips(ships, numberOfShips);
    std::cout << "\n";
    

    int loop = 100;
    int i = 0;
    //for (int i = 0; i < numberOfShips; i++) {
    while (loop > 0) {

        if (i == numberOfShips) {
            i = 0;
        }
        
        int shipsCopy[numberOfShips];
        for (int i = 0; i < numberOfShips; i++) {
            shipsCopy[i] = ships[i];
        }

        int currentShip = shipsCopy[i];
        int j = i+1;
        if (j == numberOfShips) {
            j = 0;
        }

        bool isValid = true;

        while (j != i) {
            currentShip -= shipsCopy[j];
            if (currentShip >= 0) {
                shipsCopy[i] = currentShip;
                shipsCopy[j] += shipsCopy[j];
            } 
            // else {
            //     isValid = false;
            //     break;
            // }
            j++;
            if (j == numberOfShips) {
                j = 0;
            }
        }

        //if (isValid) {
            for (int i = 0; i < numberOfShips; i++) {
                ships[i] = shipsCopy[i];
            }
            printShips(ships, numberOfShips);
        //}
        i++;
        //loop--;

        bool allEqual = true;

        int aaprev = -1;

        for (int aa = 0; aa < numberOfShips; aa++) {
            if (aaprev == -1) {
                aaprev = ships[aa];
            }

            allEqual = allEqual && (aaprev == ships[aa]);
        }

        if (allEqual) {
            break;
        }
    }
    std::cout << "\n\n";
}

int main() {
    int ships1[] = {33, 17, 9, 5};
    balanceLoad(ships1, 4);

    int ships2[4] = {66, 14, 18, 10};    
    balanceLoad(ships2, 4);
}