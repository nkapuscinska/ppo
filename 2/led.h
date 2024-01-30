
enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};

class Led{
	private:
		enum Step{LEFT,RIGHT};

		void Step(enum Step eStep);
		unsigned char ucLedIndexStep;
		void StepRight(void);
		void On(unsigned char ucLedIndex);
		
	public:
		
		void StepLeft(void);
		void Init(void);
};