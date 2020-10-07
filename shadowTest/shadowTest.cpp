
struct Vector{
    int x;
    int y;
    int value; 
};

class ShadowTest{
    public:

    int size;
    Vector pov; 
    Vector** grid;

    ShadowTest(int size){
        initMap(size);
    }

    string test(){
        return "" + grid[1][1].value + grid[1][1].x + grid[1][1].y;
    }

    void initMap(int size){
        grid[size][size];
        for (int y = 0; y < size; y++){
            for (int x = 0; x < size; x++){
                grid[y][x].value = 0;
                grid[y][x].x = x;
                grid[y][x].y = y;
            }
        }
    }
};