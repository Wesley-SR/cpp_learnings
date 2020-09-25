class Motor{
	private:
		int number_cylinders;
		int motor_power;

	public:
		
		Motor(){
			this->number_cylinders = 0;
			this->motor_power = 0;
		}
		
		Motor(int number_cylinders,int motor_power){
			this->number_cylinders = 0;
			this->motor_power = 0;
		}
		
		void getData(){
			cout << "Entre com o numero de cilindros do motor >> ";
			cin >> this->number_cylinders;
			cout << "\nEntre com a potencia do motor";
			cin >> this->motor_power;
		}
};
