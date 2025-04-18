#include "xPartition.h"
#include "xMemMgr.h"
#include <string.h>

void xPartitionReset()
{
}

_tagPartLink* PartitionGetFreeLink()
{
    return (_tagPartLink*)xMemAllocSize(sizeof(_tagPartLink));
}

void PartitionSpaceReset(_tagPartSpace* space)
{
    memset(space, 0, sizeof(_tagPartSpace));
}

void PartitionSpaceInsert(_tagPartSpace* space, void* data)
{
    space->total++;
    _tagPartLink* head = &space->head;
    _tagPartLink* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    head = PartitionGetFreeLink();
    tmp->next = head;
    tmp->next->data = data;
    tmp->next->next = NULL;
}

// Need to figure out the correct order.
S32 xPartitionGetTrueIdx(_tagPartition* part, S32 x_spaces, S32 y_spaces, S32 z_spaces)
{
    return part->total_x * z_spaces + part->total_x * y_spaces * part->total_z + x_spaces;
}

void xPartitionDump(_tagPartition*, char*)
{
}
