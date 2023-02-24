// Fill out your copyright notice in the Description page of Project Settings.


#include "CrossHUD.h"
#include "Engine/Canvas.h"


ACrossHUD::ACrossHUD()
{
    static ConstructorHelpers::FObjectFinder<UTexture2D> TR_CROSS(TEXT("Texture2D'/Game/Image/crosshair.crosshair'"));
    if (TR_CROSS.Succeeded())
    {
        CrosshairTexture = TR_CROSS.Object;
    }
}

void ACrossHUD::DrawHUD()
{
    Super::DrawHUD();

   
    if (CrosshairTexture)
    {
        // ĵ���� �߽��� ã���ϴ�.
        FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

        // �ؽ�ó �߽��� ĵ���� �߽ɿ� �µ��� �ؽ�ó�� ũ�� ���� ��ŭ �������� �ݴϴ�.
        FVector2D CrossHairDrawPosition(Center.X - (CrosshairTexture->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTexture->GetSurfaceHeight() * 0.5f));

        // �߽����� ���ؼ��� �׸��ϴ�.
        FCanvasTileItem TileItem(CrossHairDrawPosition, CrosshairTexture->Resource, FLinearColor::White);
        TileItem.BlendMode = SE_BLEND_Translucent;
        Canvas->DrawItem(TileItem);
    }
}