class laptop:
    def __init__(self, laptop_buying_date, laptop_price, laptop_speed) -> None:
        self.laptop_buying_date = laptop_buying_date
        self.laptop_price = laptop_price
        self.laptop_speed  = laptop_speed 
    def get_laptop_speed(self):
        print(self.laptop_speed)


class pc:
    def __init__(self, pc_buying_date, pc_price, pc_speed) -> None:
        self.pc_buying_date = pc_buying_date
        self.pc_price = pc_price
        self.pc_speed = pc_speed
    def get_pc_speed(self):
        print(self.pc_speed)


class myComputer(laptop,pc):
    def __init__(self, laptopInfo, pcInfo) -> None:
        laptop.__init__(self,laptopInfo["laptop_buying_date"],laptopInfo["laptop_price"], laptopInfo["laptop_speed"])
        pc.__init__(self,pcInfo["pc_buying_date"],pcInfo["pc_price"], pcInfo["pc_speed"])

laptopInfo = {"laptop_buying_date":2019, "laptop_price":30000, "laptop_speed":"Slow"}
pcInfo = {"pc_buying_date":2024, "pc_price":60000, "pc_speed":"super"}
machine1 = myComputer(laptopInfo,pcInfo)
machine1.get_laptop_speed()
machine1.get_pc_speed()