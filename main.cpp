// chat.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Chat.h"
using namespace std;
int main()
{
     Chat chat;
     chat.start();
     while (chat.isChatWork())
     {
         chat.showLoginMenu();

         while (chat.getCurrentUser())
         {
             chat.showUserMenu();

         }


     }

     // std::cout << "Hello World!\n";
}
