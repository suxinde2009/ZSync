//
//  PairingCodeWindowController.h
//  SampleDesktop
//
//  Created by Marcus S. Zarra on 11/25/09.
//  Copyright 2009 Zarra Studios, LLC. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.

@class PairingCodeWindowController;

@protocol PairingCodeDelegate

- (void)pairingCodeWindowController:(id)controller codeEntered:(NSString *)code;
- (void)pairingCodeWindowControllerCancelled:(PairingCodeWindowController *)controller;

@end

@interface PairingCodeWindowController : NSWindowController
{
  NSTextField *textField1;
  NSTextField *textField2;
  NSTextField *textField3;
  NSTextField *textField4;
  
  id<PairingCodeDelegate> delegate;
}

@property (retain) IBOutlet NSTextField *textField1;
@property (retain) IBOutlet NSTextField *textField2;
@property (retain) IBOutlet NSTextField *textField3;
@property (retain) IBOutlet NSTextField *textField4;
@property (assign) id<PairingCodeDelegate> delegate;

- (id)initWithDelegate:(id<PairingCodeDelegate>)delegate;

- (IBAction)enterCode:(id)sender;
- (IBAction)cancel:(id)sender;

- (void)refuseCode;

@end
