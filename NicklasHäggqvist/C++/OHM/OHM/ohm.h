#define MENU "..:: * What's Unknown? * ::..\n[1] Voltage\n[2] Current\n[3] Resistance\n[4] Exit\nSelect: "
#define VOLT(I, R) (I * R)
#define CURR(V, R) (V / R)
#define RES(V, I) (V / I)

struct Ohm {
	float volt;
	float current;
	float resistance;
};

void init(Ohm& ohm);
template <typename T>
T validateInput(std::string menu, T *params, const int n);
template <typename T>
T validateInput(std::string message);