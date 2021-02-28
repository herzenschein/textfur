// KDE Deps
#include <KLocalizedString>

// General Deps
#include "catquest.h"
#include "qstringcout.h"

void catQuest()
{
    qout << i18n("'So you came to visit, huh', he said, calmly arranging some boxes, and then offered: 'Please have a sit'.\n\n"
            "As you get yourself as comfortable as you can on the splinterful crate, you notice and recall his 'bedroom' and furniture to your left, further in the alley, in an arrangement that reminds you of french decoration.\n\n"
            "While certainly somewhat uneasy about you unabashedly watching his old stained mattress delicately covered in green vintage sheets, Snow starts pouring some tea from the vacuum flask he always carries into the teacup he proceeds to give you.") << Qt::endl;
    qin.read(1);
    printf("\033c");
    qout << i18n("\n\n'Ye've been asking me about it for some days now...', and as soon as you finish the first sip of your black tea, you nod, giving him the certainty of your attention. 'About why I prefer to live in here, like this... I ain't comfortable talking about it, you know, despite how long we've known each other, and I bet you'll say five years.'\n\n"
            "He sighs, turning his face torwards the alley he so richly decorated. 'The first time you've met me, do you remember it?'\n\n"
            "Of course you do, and you nod affirmatively, although expressing clear concern over forgetting some details. 'I don't think you remember at all, but I do. The first time we've met was eight years ago, not five.'\n\n"
            "That can't be right, you think, but something inside you tells you that it is as he said. 'Yeah, it was back then, really. But I think it wasn't a big of a deal to you.'\n\n") << Qt::endl;
    qin.read(1);
    printf("\033c");
    qout << i18n("\n\n'I remember this because it was the week after my parents left home.'\n\n"
            "'Back then, it was I who took care of 'em. Dad had a sickness, that one where he'd forget all the time how to do things, and mom... well, mom was mom, y'know. And by that I mean she wasn't exactly a mom you'd expect... at least not like yours.\n\n"
            "One night they went out, and never came back.'\n\n"
            "At a certain morning I had gone to the yard, laid down, just stayed there, not knowing what to do, since I had woken up so late that day - I used to take care of my dad in the mornings, but mom would usually wake me up, her only actual duty you see, I was a pup after all - and I don't know how many hours passed, thinking about when mom and dad would come home, but you showed up.") << Qt::endl;
    qin.read(1);
    printf("\033c");
    qout << i18n("\n\nHe shyly adjusted his box, trying to get a firm position, shrugging his shoulders, and with a tired grin, he continued: 'Well, it wasn't exactly like you showed up, it was more like you appeared to me right in front of my face.'\n\n"
            "'You were probably bored and wanted to chat with someone, since you just showed up by the gates and invited me to play with you. I was unsure about leaving home, so you stayed and we chatted.'\n\n"
            "As if reading perfectly well your miserable try to hide your forgetful features, he says: 'Don't mind if you can't remember it.'\n\n"
            "Only after we chatted for a bit and you left, knowing nothing about my situation, that I noticed I was hungry after spending a full day mesmerized, waiting. 'I can't wait for mom and dad to arrive home for me to show them my new friend.', I thought, only recording the next day I'd forgotten to ask where you lived.\n\n"
            "\n\n'PLACEHOLDER'") << Qt::endl;
    qin.read(1);
}
