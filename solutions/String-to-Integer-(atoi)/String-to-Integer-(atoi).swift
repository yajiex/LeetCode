class Solution {
    func myAtoi(_ str: String) -> Int {
        let arr = [Character](str.characters)
        var i = 0
        while(i < arr.count && arr[i] == " ") {
            i += 1
        }
        
        guard i < arr.count else {
            return 0
        }
        
        var flag = 1
        if arr[i] == "+" {
            i += 1
        } else if arr[i] == "-" {
            flag = -1
            i += 1
        }
        
        guard i < arr.count else {
            return 0
        }
        
        var ans = 0
        
        while i < arr.count {
            guard isDigit(arr[i]) else {
                break
            }
            
            let x = Int(String(arr[i])) ?? 0
            if ans > Int(Int32.max / 10) || ans == Int(Int32.max / 10) && x > Int(Int32.max) % 10 {
                if flag == 1 {
                    return Int(Int32.max)
                } else {
                    return Int(Int32.min)
                }
            }
            
            ans = ans * 10 + x
        
            i += 1
        }
        
        return flag * ans
    }
    
    private func isDigit(_ c: Character) -> Bool {
        return c >= "0" && c <= "9"
    }
}