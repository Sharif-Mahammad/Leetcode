class ParkingSystem {
public:
    int b,m,s;
    ParkingSystem(int big, int medium, int small) {
        b=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        if(b>0 && carType==1){
            b--;
            return 1;
        }
        else if(m>0 && carType==2){
            m--;
            return 1;
        }
        else if(s>0 && carType==3){
            s--;
            return 1;
        }
        else return 0;

    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */