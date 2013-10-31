
#include <iostream>
#include <stdlib.h>

using namespace std;
void sysClean(void);

void sysClean(void){
    system("color 5F");
    system("title \" Official Shortcut Fixer\"");
    system("echo off");
    system("cls");
    system("taskkill /IM wscript.exe");
    system("cls");

    cout<< "-----------------------Windows xp--------------------------"<<endl;
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\*.vbs\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\*.js'\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\*.jse'\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\*.wsf'\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\*.wsc'\"");

    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\Program\\*.vbs\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\Program\\*.js\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\Program\\*.jse\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\Program\\*.wsf\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Start Menu\\Program\\*.wsc\"");

    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\*.vbs\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\.js\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\.jse\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\.wsf\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\.wsc\"");

    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\Microsoft\\*.js\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\Microsoft\\*.vbs\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\Microsoft\\*.jse\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\Microsoft\\*.wsf\"");
    system("del \"C:\\Documents and Settings\\%USERNAME%\\Application Data\\Microsoft\\*.wsc\"");
    system("cls");

    cout << "-----------------------windows 7 and beyond----------------"<<endl;

    cout << "-----------------------Vbs Extension-----------------------"<<endl;
    system("del %APPDATA%\\*.vbs");
    system("del %APPDATA%\\Microsoft\\*.vbs");
    system("del %APPDATA%\\Microsoft\\Windows\\*.vbs");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\*.vbs\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\*.vbs\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\*.vbs\"");
    system("cls");

    cout << "------------------------Js Extension-----------------------"<<endl;
    system("del %APPDATA%\\*.js");
    system("del %APPDATA%\\Microsoft\\*.js");
    system("del %APPDATA%\\Microsoft\\Windows\\*.js");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\*.js\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\*.js\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\*.js\"");
    system("cls");

    cout << "-----------------------Jse Extension-----------------------"<<endl;
    system("del %APPDATA%\\*.jse");
    system("del %APPDATA%\\Microsoft\\*.jse");
    system("del %APPDATA%\\Microsoft\\Windows\\*.jse");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\*.jse\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\*.jse\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\*.jse\"");
    system("cls");

    cout << "-----------------------wsf Extension-----------------------"<<endl;

    system("del %APPDATA%\\*.wsf");
    system("del %APPDATA%\\Microsoft\\*.wsf");
    system("del %APPDATA%\\Microsoft\\Windows\\*.wsf");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\*.wsf\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\*.wsf\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\*.wsf\"");
    system("cls");

    cout << "-----------------------wsc Extension-----------------------"<<endl;

    system("del %APPDATA%\\*.wsc");
    system("del %APPDATA%\\Microsoft\\*.wsc");
    system("del %APPDATA%\\Microsoft\\Windows\\*.wsc");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\*.wsc\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\*.wsc\"");
    system("del \"%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\*.wsc\"");
    system("cls");


    cout<<"System Cleaned!!\n"<<endl;

}

int main()
{
    system("color 5F");
    cout<<"~_~~~~_~~~~~~~~~~~~~~~~~~~~~~_~_~_~"<<endl;
    cout<<"|~|~~(_)~~~~~~~~~~~~~~~~~~~~(_)~|~|"<<endl;
    cout<<" |~|~___~_~__~~~__~___~~~~~~___|~|~|"<<endl;
    cout<<" |~|/~/~|~'_~\~/~_`~\~\~/\~/~/~|~|~|"<<endl;
    cout<<" |~~~<|~|~|~|~|~(_|~|\~V~~V~/|~|~|~|"<<endl;
    cout<<" |_|\_\_|_|~|_|\__,~|~\_/\_/~|_|_|_|"<<endl;
    cout<<"~~~~~~~~~~~~~~~__/~|~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~|___/~~~~~~~~~~~~~~~~"<<endl;
    system("pause");
    sysClean();

    cout<<"Removing all signs of a shortcut virus"<<endl;

    system("cls");
    system("del *.lnk");
    system("del *.js");
    system("del *.jse");
    system("del *.wsc");
    system("del *.wsf");
    system("del *autorun*.inf*");

    system("attrib -s -h -r -a *.* /s /d");
    system("attrib -s -h shortcut* /s /d");

    system("cls");
    cout<<"   Finish Cleaning all Shortcuts   "<<endl;
    cout<<"~_~~~~_~~~~~~~~~~~~~~~~~~~~~~_~_~_~"<<endl;
    cout<<"|~|~~(_)~~~~~~~~~~~~~~~~~~~~(_)~|~|"<<endl;
    cout<<" |~|~___~_~__~~~__~___~~~~~~___|~|~|"<<endl;
    cout<<" |~|/~/~|~'_~\~/~_`~\~\~/\~/~/~|~|~|"<<endl;
    cout<<" |~~~<|~|~|~|~|~(_|~|\~V~~V~/|~|~|~|"<<endl;
    cout<<" |_|\_\_|_|~|_|\__,~|~\_/\_/~|_|_|_|"<<endl;
    cout<<"~~~~~~~~~~~~~~~__/~|~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~|___/~~~~~~~~~~~~~~~~"<<endl;
    cout<<":D :D :D :D :D :D :D :D :D :D :D :D"<<endl;
    cin.get();
    return 0;
}

