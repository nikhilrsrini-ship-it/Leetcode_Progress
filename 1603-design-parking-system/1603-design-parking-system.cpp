class ParkingSystem {
public:
    int arr[3] = {};
    ParkingSystem(int big, int medium, int small) {
        arr[0] = big;
        arr[1]=medium;
        arr[2] = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
            if(arr[0]>=1){arr[0]--;return true;}
            else return false;
        }
        else if(carType == 2){
            if(arr[1]>=1){;arr[1]--;return true;}
            else return false;
        }
        else{
            if(arr[2]>=1){arr[2]--;return true;}
            else return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */