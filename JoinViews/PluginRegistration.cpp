#include "ofxsImageEffect.h"
#include "JoinViews.h"

namespace OFX
{
    namespace Plugin
    {
        void getPluginIDs(OFX::PluginFactoryArray &ids)
        {
            static JoinViewsPluginFactory p("net.sf.openfx:joinViewsPlugin", 1, 0);
            ids.push_back(&p);
        }
    }
}
