#include<iostream>
#include<unistd.h>


using namespace std;



class installer{
public:
    void interface(){
        int choice;

        while(true){
            system("clear");
            cout << "Welcome\n";
            cout << "_______________________________\n";
            cout << "1. Arch linux\n";
            cout << "2. Debian\n";
            cout << "Choice options (1 or 2): ";
            cin >> choice;

            if (choice == 1){
                cout << "Choice options for Arch linux\n";
                installer_aps_archlinux();
                break;
            }
            else if (choice == 2){
                cout << "Choice options for Debian\n";
                installer_aps_debian();
                break;
            }
            else {
                cout << "Somting won't wrong\n";
                sleep(3);
            }

        }

    }

    void installer_aps_archlinux(){
        while (true){
            system("clear");
            char options_installer; 
        
            cout << "Auto installer type A or a\n";
            cout << "Manual installer type M or m\n";
            cin >> options_installer;

            if (options_installer == 'A' || options_installer == 'a'){
                cout << "\tAuto\n";
                system("sudo pacman -Syuu");
                system("sudo pacman -S gcc base-devel git inxi fastfetch python");
                system("yay -S fakeroot");
                system("yay -S youtube-music 3.10.0-1");
                system("yay -S brave-browser");
                system("yay -S openoffice-bin");
                system("sudo pacamn -S discord firefox steam vlc code discover");
                system("flatpak install flathub app.zen_browser.zen");
                system("sudo pacman -Syu --needed sudo linux-headers man-db man-pages nano wget curl htop networkmanager network-manager-applet pipewire pipewire-pulse wireplumber alsa-utils bash-completion unzip p7zip tar reflector lsb-release make");
                break;
            }
            else if (options_installer == 'M' || options_installer == 'm'){
                cout << "\tManual\n";
                manual_for_Archlinux();
                break;
            } 
            else{
                cout << "Invalid type choice\n";
            }
        }        
    }   
    
    void installer_aps_debian(){
        while (true){
            system("clear");
            char options_installer;

            cout << "Auto installer type A or a\n";
            cout << "Manual installer type M or m\n";
            cin >> options_installer;

            if (options_installer == 'A' || options_installer == 'a'){
                cout << "\tAuto\n";
                system("sudo apt update && sudo apt install -y gcc build-essential git inxi fastfetch python3 python3-pip discord firefox-esr steam vlc code plasma-discover sudo linux-headers-$(uname -r) man-db manpages nano wget curl htop network-manager network-manager-gnome pipewire pipewire-pulse wireplumber alsa-utils bash-completion unzip p7zip-full tar lsb-release make flatpak && sudo flatpak remote-add --if-not-exists flathub https://flathub.org/repo/flathub.flatpakrepo && flatpak install -y flathub app.zen_browser.zen");
                break;
            }
            else if (options_installer == 'M' || options_installer == 'm'){
                cout << "\tManula\n";
                manual_for_Debian();
                break;
            }
            else {
                cout << "Invalid type choice\n";
            }


        }

    }

    void manual_for_Archlinux(){
        while (true){
            system("clear");
            int choice; 
            cout << "1. Browsers\n";
            cout << "2. Developers-tools\n";
            cout << "3. Komunikators\n";
            cout << "4. Important for system\n";
            cin >> choice;

            if (choice == 1){
                while (true){
                    system("clear");
                    int ChoiceBrowser;
                    cout << "\tBrowsers\n";
                    cout << "1. FireFox\n";
                    cout << "2. Zen Browser\n";
                    cout << "3. Brave-browser\n";
                    cin >> ChoiceBrowser;

                    switch(ChoiceBrowser){
                        case 1:
                            system("sudo pacman -S firefox");
                            break;
                        case 2: 
                            system("flatpak install flathub app.zen_browser.zen");
                            break;
                        case 3:
                            system("yay -S brave-browser");
                            break;
                        default:
                            cout << "Invalid type choice\n";
                            sleep(3);
                                    
                    }

                }

                break;
            }
            else if (choice == 2){
                while (true){
                    system("clear");
                    int ChoiceDevTool;                
                    cout << "\tDeveloper-tools\n";
                    cout << "1. Code\n";
                    cout << "2. GCC\n";
                    cout << "3. git\n";
                    cout << "4. base-devel\n";
                    cout << "5. python\n";
                    cin >> ChoiceDevTool;                    
                    
                    switch(ChoiceDevTool){
                        case 1:
                            system("sudo pacman -S code");
                            break; 
                        case 2:
                            system("sudo pacman -S gcc");
                            break;
                        case 3:
                            system("sudo pacman -S git");
                            break;
                        case 4:
                            system("sudo pacman -S base-devel");
                            break;
                        case 5:
                            system("sudo pacman -S python");
                            break;    
                        default:
                            cout << "Somting won't wrong!\n";
                            sleep(3);           
                    }   
                }
                break;
            } 
            else if (choice == 3){
                while (true){
                    system("clear");
                    int ChoiceKomu;
                    cout << "\tKomunikators\n";
                    cout << "1. Discord\n";
                    cout << "2. Thunderbird\n";
                    cin >> ChoiceKomu;

                    switch(ChoiceKomu){
                        case 1:
                            system("sudo pacman -S discord ");
                            break;
                        case 2:
                            system("sudo pacman -S thunderbird");
                            break;
                        default:
                            cout << "Somting won't wrong\n";
                            sleep(3);       
                    }


                }

                break;
            }
            else if (choice == 4){
                while (true){
                    system("clear");
                    int ChoiceSystem;
                    cout << "\tImportant for system\n"; 
                    cout << "1. unzip\n";
                    cout << "2. p7zip\n";
                    cout << "3. tar\n";
                    cout << "4. linux-headers\n";
                    cout << "5. man-db\n";                    
                    cout << "6. man-pages\n"; 
                    cout << "7. bash-completion\n"; 
                    cout << "8. nano\n"; 
                    cout << "9. wget\n"; 
                    cout << "10. curl\n"; 
                    cout << "11. fastfetch\n"; 
                    cout << "12. htop\n"; 
                    cout << "13. pipewire\n";
                    cin >> ChoiceSystem; 

                    switch (ChoiceSystem) {
                        case 1: system("sudo pacman -S unzip"); break;
                        case 2: system("sudo pacman -S p7zip"); break;
                        case 3: system("sudo pacman -S tar"); break;
                        case 4: system("sudo pacman -S linux-headers"); break; 
                        case 5: system("sudo pacman -S man-db"); break;
                        case 6: system("sudo pacman -S man-pages"); break;
                        case 7: system("sudo pacman -S bash-completion"); break;
                        case 8: system("sudo pacman -S nano"); break;
                        case 9: system("sudo pacman -S wget"); break;
                        case 10: system("sudo pacman -S curl"); break;
                        case 11: system("sudo pacman -S fastfetch"); break;
                        case 12: system("sudo pacman -S htop"); break;
                        case 13: system("sudo pacman -S pipewire"); break;
                        case 0: return; 
                    default:
                        cout << "Something went wrong\n";
                        sleep(2);

                }


                break;
            }
            }
            
            else {
                cout << "Somting won't wrong\n";
                break;
            }


        }


    }
    
    void manual_for_Debian(){
        while (true){
            int choice; 
            cout << "1. Browsers\n";
            cout << "2. Developers-tools\n";
            cout << "3. Komunikators\n";
            cout << "4. Important for system\n";
            cin >> choice;
            if (choice == 1){
                while (true){
                    int ChoiceBrowserDeb;
                    system("clear");
                    cout << "\tBroweser\n";
                    cout << "1. FireFox\n";
                    cout << "2. Zen Browser\n";
                    cout << "3. Brave-browser\n";
                    cin >> ChoiceBrowserDeb;
                    
                    switch (ChoiceBrowserDeb){
                        case 1:
                            system("sudo apt install -y firefox-esr");
                            break;
                        case 2:
                            system("flatpak install -y flathub app.zen_browser.zen");
                            break;
                        case 3:
                            system("sudo apt install -y curl");
                            system("sudo curl -fsSLo /usr/share/keyrings/brave-browser-archive-keyring.gpg https://brave.com/static-assets/archive-keyring.gpg");
                            system("echo \"deb [signed-by=/usr/share/keyrings/brave-browser-archive-keyring.gpg arch=$(dpkg --print-architecture)] https://brave.com/linux/ stable main\" | sudo tee /etc/apt/sources.list.d/brave-browser-release.list");
                            system("sudo apt update");
                            system("sudo apt install -y brave-browser");
                            break;
                        default:
                            cout << "Somting won't wrong\n";    
                    }
    
                }
                break;
            }
            else if (choice == 2){
                while (true){
                    int ChoiceDevToolDeb;
                    system("clear");
                    cout << "\tDevelopers-tools\n";
                    cout << "1. Code\n";
                    cout << "2. GCC\n";
                    cout << "3. git\n";
                    cout << "4. python\n";
                    cin >> ChoiceDevToolDeb;

                    switch (ChoiceDevToolDeb){
                        case 1:
                            system("sudo apt install -y code");
                            break;
                        case 2:
                            system("sudo apt install -y gcc");
                            break;
                        case 3:
                            system("sudo apt install -y git");
                            system("lsblk -f");
                            break;
                        case 4:
                            system("sudo apt install -y python3");
                            system("sudo apt install -y python3-pip");       
                        default:
                            cout << "Somting won't wrong\n";    
                    }

                }
                break;
            } 
            else if (choice == 3){
                while (true){
                    int ChoiceKomuDeb;
                    system("clear");
                    cout << "\tKomunikators\n";
                    cout << "1. Discord\n";
                    cout << "2. Thunderbird\n";
                    cin >> ChoiceKomuDeb;

                    switch (ChoiceKomuDeb){
                        case 1:
                            system("sudo apt install -y discord");
                            break;
                        case 2:
                            system("sudo apt install -y thunderbird");
                            break;
                        default:
                            cout << "Somting won't wrong\n";    
                    }
                }
                break;
            }
            else if (choice == 4){
                while (true){
                    int ChoiceSystemDeb;
                    system("clear");
                    cout << "Important for system\n";
                    cout << "1. unzip\n";
                    cout << "2. p7zip\n";
                    cout << "3. tar\n";
                    cout << "4. linux-headers\n";
                    cout << "5. man-db\n";                    
                    cout << "6. man-pages\n"; 
                    cout << "7. bash-completion\n"; 
                    cout << "8. nano\n"; 
                    cout << "9. wget\n"; 
                    cout << "10. curl\n"; 
                    cout << "11. fastfetch\n"; 
                    cout << "12. htop\n"; 
                    cout << "13. pipewire\n";
                    cin >> ChoiceSystemDeb;
                    
                    switch (ChoiceSystemDeb){
                        case 1:
                            system("sudo apt install -y unzip");
                            break;
                        case 2:
                            system("sudo apt install -y p7zip-full");
                            break;
                        case 3:
                            system("sudo apt install -y tar");
                            break;
                        case 4:
                            system("sudo apt install -y linux-headers-$(uname -r)");
                            break;
                        case 5:
                            system("sudo apt install -y man-db");
                            break;
                        case 6:
                            system("sudo apt install -y manpages");
                            break;
                        case 7:
                            system("sudo apt install -y bash-completion");
                            break;
                        case 8:
                            system("sudo apt install -y nano");
                            break;
                        case 9:
                            system("sudo apt install -y wget");
                            break;
                        case 10:
                            system("sudo apt install -y curl");
                            break;
                        case 11:
                            system("sudo apt install -y fastfetch");
                            break;
                        case 12:
                            system("sudo apt install -y htop");
                            break;
                        case 13:
                            system("sudo apt install -y pipewire");
                            break;    
                        default:
                            cout << "Somting won't wrong\n";    
                    }

                }
                break;
            }
            else {
                cout << "Somting won't wrong\n";
            }


        }

    }
};

int main(){
    installer installercls;
    installercls.interface();    
}