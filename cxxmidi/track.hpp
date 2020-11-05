#ifndef CXXMIDI_TRACK_HPP
#define CXXMIDI_TRACK_HPP

#include <vector>
#include <string>

#include <cxxmidi/event.hpp>

namespace CxxMidi {

class Track : public std::vector<Event>
{
public:
    inline Event& addEvent();

    inline std::string getName() const;

    inline std::string getTempo() const;

private:

};

} // namespace CxxMidi

#include <cxxmidi/event.hpp>

namespace CxxMidi {

Event& Track::addEvent()
{
    this->push_back(Event());
    return this->back();
}

std::string Track::getName() const
{
    std::string r;

    for(size_t i=0; i<this->size(); i++)
    {
        const Event * event = &this->at(i);
        if( event->isMeta() )
            if( event->at(1) == Event::TrackName)
            {
                if(!r.empty())
                    r += ", ";
                r += event->text();
            }
    }

    return r;
}


std::string Track::getTempo() const {
    std::string r;
    int tempo = 0;
    for (size_t i= 0; i < this->size(); i++) {
        const Event* event = &this->at(i);
        if (event->isMeta(CxxMidi::Event::Tempo))
        {
            tempo = CxxMidi::Utils::extractTempo(event->at(2), event->at(3), event->at(4));
                
            r += std::to_string(tempo);
        }
    }
    return r;
}
} // namespace CxxMidi

#endif // CXXMIDI_TRACK_HPP
