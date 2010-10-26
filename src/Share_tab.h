// vim:tabstop=4 shiftwidth=4 encoding=utf-8 syntax=objc

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@class Rows_to_attachment;

@interface Share_tab : UIViewController <MFMailComposeViewControllerDelegate>
{
	/// Label used to display the number of entries.
	UILabel *counter_;

	/// Cached value of entries, to avoid disk roundtrips each time.
	int num_entries_;

	/// Switches and labels.
	UISwitch *switch_;

	/// Action buttons.
	UIButton *share_;
	UIButton *purge_;

	/// Shows a wait dialog along with a non touchable interface.
	UIView *shield_;
	UIActivityIndicatorView *activity_;

	/// Pointer to the object holding the rows to send by email.
	Rows_to_attachment *rows_to_attach_;
}

@property (nonatomic, assign) int num_entries;

- (id)init;

@end
