//
//  ViewController.h
//  AudioVideoMerge
//
//  Created by Jether on 26/11/14.
//  Copyright (c) 2014 Jether. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/AssetsLibrary.h>
#import <MediaPlayer/MediaPlayer.h>

@interface ViewController : UIViewController
{
    MPMoviePlayerController *moviePlayer;
}

- (IBAction)btnMergeTapped:(id)sender;

- (void)exportDidFinish:(AVAssetExportSession*)session;

@property(nonatomic,retain)AVURLAsset* videoAsset;
@property(nonatomic,retain)AVURLAsset* audioAsset;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityView;
@property (weak, nonatomic) IBOutlet UIView *vwMoviePlayer;

@end
