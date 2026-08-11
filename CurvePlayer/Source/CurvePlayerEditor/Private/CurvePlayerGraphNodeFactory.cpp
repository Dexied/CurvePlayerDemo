#include "CurvePlayerGraphNodeFactory.h"

#include "EdGraph/EdGraphNode.h"

#include "K2Node_PlayFloatCurve.h"
#include "SGraphNode_PlayFloatCurve.h"

TSharedPtr<SGraphNode> FCurvePlayerGraphNodeFactory::CreateNode(UEdGraphNode* Node) const
{
    if (UK2Node_PlayFloatCurve* CurveNode = Cast<UK2Node_PlayFloatCurve>(Node))
    {
        return SNew(SGraphNode_PlayFloatCurve).CurveNode(CurveNode).CurveLoopMode(CurveNode->GetCurveLoopMode());
    }

    return nullptr;
}
