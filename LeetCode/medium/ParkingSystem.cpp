class ParkingSystem {
public:
    
    int bigCapacity = 0, mediumCapacity = 0, smallCapacity = 0;
    int cBig = 0, cMedium = 0, cSmall = 0;
    ParkingSystem(int big, int medium, int small) {
        bigCapacity = big;
        mediumCapacity = medium;
        smallCapacity = small;
        cBig=0;
        cMedium=0;
        cSmall=0;
    }
    
    bool addCar(int carType) {
        if(carType==1){
            if(cBig < bigCapacity) {
                cBig++;
                return true;
            }
            else{
                return false;
            }
        }else if(carType==2){
            if(cMedium < mediumCapacity) {
                cMedium++;
                return true;
            }
            else{
                return false;
            }
        }else{
            if(cSmall<smallCapacity){
                cSmall++;
                return true;
            }
            else{
                return false;
            }
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */