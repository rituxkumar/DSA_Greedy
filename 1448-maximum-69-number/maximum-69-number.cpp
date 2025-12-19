class Solution {
public:
    int maximum69Number(int num) {
        int placeValSix = -1;
        int placeVal = 0;

        int temp = num;
        while (temp > 0) {
            int remainder = temp % 10;
            if (remainder == 6) 
                placeValSix = placeVal;
            

            temp = temp / 10;
            placeVal++;
        }
        if (placeValSix == -1) 
            return num;
        
        return num + 3 *pow (10, placeValSix);
    }
};