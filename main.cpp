#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    if(argc != 6){
        cout <<"Usage: " <<argv[0] << " <FirstTeamFile> <SecondTeamFile> <MatchFile> <OutputFileName> <verbosity>"<<endl;
    }
    else{
        //continue program
        ifstream file_matchData ("match1.txt");

        if(file_matchData.is_open()){
            //could not be opened
        } else {            file_matchData.rdbuf();
        }
    }
    return 0;
}

