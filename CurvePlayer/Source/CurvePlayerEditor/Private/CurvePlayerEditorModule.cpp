#include "CurvePlayerGraphNodeFactory.h"

#include "EdGraphUtilities.h"
#include "Modules/ModuleManager.h"

class FCurvePlayerEditorModule final : public IModuleInterface
{
public:
    virtual void StartupModule() override
    {
        GraphNodeFactory = MakeShared<FCurvePlayerGraphNodeFactory>();
        FEdGraphUtilities::RegisterVisualNodeFactory(GraphNodeFactory);
    }

    virtual void ShutdownModule() override
    {
        if (GraphNodeFactory.IsValid())
        {
            FEdGraphUtilities::UnregisterVisualNodeFactory(GraphNodeFactory);
            GraphNodeFactory.Reset();
        }
    }

private:
    TSharedPtr<FCurvePlayerGraphNodeFactory> GraphNodeFactory;
};

IMPLEMENT_MODULE(FCurvePlayerEditorModule, CurvePlayerEditor)
