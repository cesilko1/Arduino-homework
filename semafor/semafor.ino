#define red 2
#define orange 3
#define green 4

#define speed 5000

unsigned long long lastTime = 0;
int cycle = 0;

int statuses[][3] = {
	{1, 0, 0},
	{1, 1, 0},
	{0, 0, 1},
	{0, 1, 0}
};

void setup() {
	pinMode(red, OUTPUT);
	pinMode(orange, OUTPUT);
	pinMode(green, OUTPUT);
}

void loop() {
	if(millis() - lastTime > speed) {
		digitalWrite(red, statuses[cycle][0]);
		digitalWrite(orange, statuses[cycle][1]);
		digitalWrite(green, statuses[cycle][2]);

		lastTime = millis();
		cycle++;

		if(cycle == (sizeof statuses / sizeof statuses[0])) {
			cycle = 0;
		}
	}
}