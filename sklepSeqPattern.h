// sklepSeqPattern.h: interface for the sklepSeqPattern class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_SKLEPSEQPATTERN_H__F277BDA6_FA04_4DC5_8E91_89AF43BE3A54__INCLUDED_)
#define AFX_SKLEPSEQPATTERN_H__F277BDA6_FA04_4DC5_8E91_89AF43BE3A54__INCLUDED_

#include <juce.h>

class sklepSeqPattern  : public Component
{
	public:
		sklepSeqPattern();
		~sklepSeqPattern();
		bool fromXml (XmlElement *e);
		void setMidiData (MidiBuffer b);
		void setMidiEvent (int n, MidiMessage note);
		MidiMessage *getMidiEvent (int n);

	private:
		MidiBuffer midiNotes;
		int seqBpm;
		bool hostSync;
		int patternLength;
};

#endif // !defined(AFX_SKLEPSEQPATTERN_H__F277BDA6_FA04_4DC5_8E91_89AF43BE3A54__INCLUDED_)
