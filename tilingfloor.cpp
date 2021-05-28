#include <iostream>
#include <vector>

using namespace std;

vector<vector<string>> place_tiles(int room_length, int room_width, int tile_dim){
    vector<vector<string>> placement = {};
    int num_of_tiles_per_row = room_length / tile_dim;
    int num_of_tiles_per_col = room_width / tile_dim;

    string prev_tile = "";

    for (int i = 0; i < num_of_tiles_per_col; i++)
    {
        vector<string> cur_row_tiles = {};

        for (int j = 0; j < num_of_tiles_per_row; j++)
        {
            if(prev_tile == "b"){
                cur_row_tiles.push_back("w");
                prev_tile = "w";

            }
            cur_row_tiles.push_back("b");
            prev_tile = "b";
        }



        placement.push_back(cur_row_tiles);
        prev_tile = cur_row_tiles.front();
        
    }
    

    return placement;
}
int main() {

    vector<vector<string>> data = place_tiles(4,4,1);
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[0][i] << endl;
        cout << data[1][i] << endl;
    }
    
    return 0;
}