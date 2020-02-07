class sample(){
    public:

        sample();
        sample(int aHour, int aMinute);

        int getHour() const {return hour};
        int getMinute() const {return minute};

        void setHour(int aHour) {hour = aHour};
        void setMinute(int aMinute) {minute = aMinute};

        bool isEqual(const sample& aSample) const;

    private:
        int hour;
        int minute;
}