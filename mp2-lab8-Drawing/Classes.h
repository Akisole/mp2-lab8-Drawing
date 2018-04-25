
#define Graphics System::Drawing::Graphics
#define Pens System::Drawing::Pens

class TRoot {
protected:
	bool visible, active;
public:
	virtual void Show (Graphics ^gr) = 0;
	virtual void Hide (Graphics ^gr) = 0;
	virtual void Move (Graphics ^gr, int dx, int dy) = 0;
};

class TPoint : public TRoot {
protected:
	int x, y;
public:
	virtual void Show (Graphics ^gr) {
		gr -> DrawEllipse(Pens::Black, x-2, y-2, x+2, y+2);
		visible = true;
	}
	virtual void Hide (Graphics ^gr) {
		gr -> DrawEllipse(Pens::White, x-2, y-2, x+2, y+2);
		visible = false;
	}
};