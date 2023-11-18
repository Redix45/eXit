#include <iostream>
#include <string>


std::string toUpper(const std::string& str) {
    std::string result = str;
    for (char& c : result) {
        c = toupper(c);
    }
    return result;
}


void printCyan(const std::string& text) {
    std::cout << "\033[1;36m" << text << "\033[0m"; 
}

int main() {
    std::string a;
    std::string b;
    std::string c;
    std::string d;
    std::string e;
    std::string f;
    std::string g;
    std::string h;
    std::string i;
    char playAgain;

    do {
        printCyan("You're trapped in a dungeon with your friend.");
        printCyan("\nYou see a barrel. What do you do? ");
        std::getline(std::cin >> std::ws, c);
        c = toUpper(c);

        if (c == "MOVE THE BARREL") {
            printCyan("The barrel rolls aside, and you find a secret tunnel");
            printCyan("\nWhat do you do? ");
            std::getline(std::cin >> std::ws, a);
            a = toUpper(a);

            if (a == "ENTER TUNNEL") {
                printCyan("You start to escape, but your friend is too weak to go with you.");
                printCyan("\nThey hand you a note.");
                printCyan("\nWhat do you do? ");
                std::getline(std::cin >> std::ws, b);
                b = toUpper(b);

                if (b == "READ NOTE") {
                    printCyan("It is too dark to read the note.");
                    printCyan("\nWhat do you do? ");
                    std::getline(std::cin >> std::ws, d);
                    d = toUpper(d);

                    if (d == "LEAVE") {
                        printCyan("You crawl through the tunnel, and it leads to a beach.");
                        printCyan("\nWhat do you do? ");
                        std::getline(std::cin >> std::ws, e);
                        e = toUpper(e);

                        if (e == "LOOK") {
                            printCyan("In the water you see a boat.");
                            printCyan("\nWhat do you do? ");
                            std::getline(std::cin >> std::ws, f);
                            f = toUpper(f);

                            if (f == "GET ON THE BOAT") {
                                printCyan("Congratulations, you're heading to a new world!");
                            } else {
                                printCyan("Wrong answer!");
                            }
                        } else {
                            printCyan("Wrong answer!");
                        }
                    } else {
                        printCyan("Wrong answer!");
                    }
                } else {
                    printCyan("Wrong answer!");
                }
            } else {
                printCyan("Wrong answer!");
            }
        } else if (c == "SIT DOWN TO MY FRIEND") {
            printCyan("Your friend hands you a note.");
            printCyan("\nWhat do you do? ");
            std::getline(std::cin >> std::ws, a);
            a = toUpper(a);

            if (a == "READ NOTE") {
                printCyan("It is too dark to read the note.");
                printCyan("\nWhat do you do? ");
                std::getline(std::cin >> std::ws, h);
                h = toUpper(h);

                if (h == "LIGHT A MATCH") {
                    printCyan("The note says,\"Don't leave me here.\" ");
                    printCyan("\nDo you leave your friend or stay? ");
                    std::getline(std::cin >> std::ws, i);
                    i = toUpper(i);

                    if (i == "STAY") {
                        printCyan("*lights go on*");
                        std::getline(std::cin >> std::ws, i);
                        i = toUpper(i);
                    }
                }
            } else {
                printCyan("Wrong answer!");
            }
        } else {
            printCyan("Wrong answer!");
        }

        printCyan("\nDo you want to play again? (Y/N): ");
        std::cin >> playAgain;
        playAgain = toupper(playAgain);

    } while (playAgain == 'Y');

    return 0;
}
