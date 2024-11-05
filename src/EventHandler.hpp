#pragma once


enum class Event{
    SUMMERTIME,
    RESET_WIFI,

    POMODORO_CLOCK_SWITCH,
    POMODORO_START,
    POMODORO_RESET,
    POMODORO_PAUSE,
    POMODORO_SKIP
};

class EventHandler{
public:
    virtual void onEvent(Event event) = 0;
};